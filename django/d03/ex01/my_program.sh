#!/bin/bash

#get pip version
pip_version=$(pip show pip | grep "Version")
echo "pip $pip_version"

#create and activate venv local_lib
folder_path='local_lib'
python3 -m venv $folder_path
source $folder_path/bin/activate

#install path lib and save log
file_log='pip_install.log'
pip install git+https://github.com/jaraco/path.git --log $file_log --force-reinstall

#In case is need to access ex01 venv from another exercise
#source ../ex01/local_lib/bin/activate