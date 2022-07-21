#!/bin/bash
cd ..
echo "Installing Terraform and Java.................................................."
curl -fsSL https://apt.releases.hashicorp.com/gpg | sudo apt-key add -
sudo apt-add-repository "deb [arch=amd64] https://apt.releases.hashicorp.com $(lsb_release -cs) main"
sudo apt-get update && sudo apt-get install terraform
sudo apt-get install fontconfig openjdk-11-jre -y
sudo apt update
echo "Installing Ansible, AWS Cli and jq.................................................."
sudo apt install software-properties-common -y
sudo add-apt-repository --yes --update ppa:ansible/ansible
sudo apt install ansible -y
sudo apt install awscli -y
sudo apt install jq -y
echo "installtion of Terraform java Ansible to current system completed."
echo "installion of jenkins started........................................................"
curl -fsSL https://pkg.jenkins.io/debian-stable/jenkins.io.key | sudo tee \
    /usr/share/keyrings/jenkins-keyring.asc > /dev/null
echo deb [signed-by=/usr/share/keyrings/jenkins-keyring.asc] \
    https://pkg.jenkins.io/debian-stable binary/ | sudo tee \
    /etc/apt/sources.list.d/jenkins.list > /dev/null
sudo apt-get update
sudo apt-get install jenkins -y
echo "To launch instance choose right main.tf in main1.sh it will further lead the process."
