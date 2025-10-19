######################################################
This is an example project for converting temperature
from celsius to fahrenheit. The project uses GoogleTest
as the testing framework and has out-of-source build
in place using cmake. It also demonstrates the use of
install command in cmake in different context.

######################################################

How to run:

cd to the project directory.
mkdir -p build
cd build

cmake -S.. -B.
cmake --build .

cmake install . --prefix .

######################################################
How to create the project:

git init

git add README.md

git commit -m "first commit"

git branch -M main

git remote add origin git@github.com:sandeepkhamari/TempConverter.git

git push -u origin main

push an existing repository from the command line

git remote add origin git@github.com:sandeepkhamari/TempConverter.git

git branch -M main

git push -u origin main

######################################################
How to test
go to the build directory.
CTest --verbose

######################################################
