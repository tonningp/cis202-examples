all:
	@g++ -o main *.cpp 2>&1 | tee errors.txt

run: main.cpp
	@./main | tee output.txt

edit:
	@vim main.cpp

clean:
	@rm main

git-commit:
	git add .
	git commit -a -m 'update'

git-submit:
	git push
