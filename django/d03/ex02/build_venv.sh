#!/bin/bash

#get pip version
pip_version=$(pip show pip | grep "Version")
echo "pip $pip_version"

#create and activate venv local_lib
folder_name='venv'
python3 -m venv $folder_name
source $folder_name/bin/activate

#source venv/bin/activate

#to create requirement
#pip freeze -> requirement.txt 

#pip install -r requirement.txt


#source venv/bin/activate