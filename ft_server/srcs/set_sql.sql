CREATE user 'tgil'@'localhost' identified by '123123';
CREATE DATABASE wordpress;
GRANT ALL PRIVILEGES ON wordpress.* TO 'tgil'@'localhost' WITH GRANT OPTION;
