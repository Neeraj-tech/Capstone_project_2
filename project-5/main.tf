provider "aws" {
region = "ap-south-1"
profile = "default"
}

resource "aws_instance" "kub_m" {
ami = "ami-068257025f72f470d"
instance_type = "t2.medium"
key_name = "EC2new"
security_groups = ["launch-wizard-2"]
tags = {
Name = "kub_m"
}
}
output "kub_m_ip" {
  value = aws_instance.kub_m.public_ip
}

output "kub_m_zone" {
  value = aws_instance.kub_m.availability_zone
}

resource "aws_instance" "kub_worker1" {
ami = "ami-068257025f72f470d"
instance_type = "t2.micro"
key_name = "EC2new"
security_groups = ["launch-wizard-2"]
tags = {
Name = "kub_worker1"
}
}
output "kub_worker1_ip" {
  value = aws_instance.kub_worker1.public_ip
}

output "kub_worker1_zone" {
  value = aws_instance.kub_worker1.availability_zone
}

resource "aws_instance" "kub_worker2" {
ami = "ami-068257025f72f470d"
instance_type = "t2.micro"
key_name = "EC2new"
security_groups = ["launch-wizard-2"]
tags = {
Name = "kub_worker2"
}
}
output "kub_worker2_ip" {
  value = aws_instance.kub_worker2.public_ip
}

output "kub_worker2_zone" {
  value = aws_instance.kub_worker2.availability_zone
}
