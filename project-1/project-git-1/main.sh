#!/bin/bash

git remote -v
git branch develop
git branch feature1
git branch feature2
git branch main
git branch
git checkout feature1
touch feature1.txt
git add feature1.txt
git commit -m "feature1"
git checkout feature2
touch feature2.txt
git add feature2.txt
git commit -m "feature2"


