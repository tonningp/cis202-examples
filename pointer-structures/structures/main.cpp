#include<iostream>
#include<string>
#include<vector>
#include<cmath>


using namespace std;

struct Point
{
   double x;
   double y;
};

struct Weapon
{
   string name;
   string type;
   int power; 
   int magic;
};

struct Character
{
   int id;
   string name;
   string type;
   int strength;
   int manna;
   string armor;
   Weapon current_weapon;
   vector<Weapon> weapon_bag;
   Point position;
};

struct Student
{
   int id;
   string name;
   double grade;
};

void set_student(Student &s,int id,string name,double grade)
{
   s.id = id;
   s.name = name;
   s.grade = grade;
}

void print_student(const Student &s)
{
   cout << "Id: " << s.id << endl;
   cout << "Name: " << s.name << endl;
   cout << "Grade: " << s.grade << endl;
}

Student* find_by_id(const vector<Student> &students,int id)
{
   Student *temp_s = nullptr;
   for(Student s : students)
   {
       if(id == s.id)
       {
          temp_s = new Student;
          *temp_s = s;
       }
   }
   return temp_s;
}

bool is_equal(const Student &s1,const Student &s2)
{
   return s1.id == s2.id && s1.name == s2.name && s1.grade == s2.grade;
}

void print_character(const Character *c)
{
   cout <<"Name: "<< c->name << endl;
   cout <<"Type: "<< c->type << endl;
}

void print_character2(Character &c)
{
   cout <<"Name: "<< c.name << endl;
   cout <<"Type: "<< c.type << endl;
}

double distance(const Point &p1,const Point &p2)
{
   return sqrt(pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2));
}

int main()
{
    Student s;

    Student s1 = {1,"Fred Flintstone",75};
    Student s2 = {1,"Fred Flintstone",75};
    if(is_equal(s1,s2))
    {
       cout << "Records are the same" << endl;
    }

    Character characters[10];
    vector<Student> students;
    set_student(s,1,"Fred Flintstone",75);
    students.push_back(s);
    set_student(s,2,"Barney",85);
    students.push_back(s);
    set_student(s,3,"Wilma Flintstone",95);
    students.push_back(s);

    for(Student student : students)
    {
       cout << student.id;
       cout << " " << student.name;
       cout << " " << student.grade << endl;
       cout << "-------------------------" << endl;
    }

    Student *found = find_by_id(students,3);
    if(found != nullptr)
    {
      cout << "The student with id 3 is: ";
      print_student(*found);
    }

   
    Character h;
    h.id = 1;
    h.name = "A Character";

    Character *hero = new Character;
    Character *monster = new Character;
    
    hero->name = "Perseus";
    hero->type = "Human";
    monster->name = "Medusa";
    monster->type = "Gorgon";

    print_character(hero);
    print_character(monster);

    print_character2(*monster);
    Point p1 = {1.0,2.0};
    Point p2 = {2.0,3.0};

    cout << distance(p1,p2) << endl;

    return 0;
}
