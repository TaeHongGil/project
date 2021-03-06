chmod 775 /ft_server.sh
chown -R www-data:www-data /var/www/
chmod -R 755 /var/www/
chmod 777 /usr/local/mysql

# ssl
openssl req -newkey rsa:4096 -days 365 -nodes -x509 -subj "/C=KR/ST=Seoul/L=Seoul/O=42Seoul/OU=Lee/CN=localhost" -keyout localhost.dev.key -out localhost.dev.crt
mv localhost.dev.crt etc/ssl/certs/
mv localhost.dev.key etc/ssl/private/
chmod 600 etc/ssl/certs/localhost.dev.crt etc/ssl/private/localhost.dev.key

# nginx file
cp -rp /tmp/default /etc/nginx/sites-available/

# phpMyAdmin
wget https://files.phpmyadmin.net/phpMyAdmin/5.0.2/phpMyAdmin-5.0.2-all-languages.tar.gz
tar -xvf phpMyAdmin-5.0.2-all-languages.tar.gz
mv phpMyAdmin-5.0.2-all-languages phpmyadmin
mv phpmyadmin /var/www/html/

# phpMyAdmin file
cp -rp /tmp/config.inc.php var/www/html/phpmyadmin/config.inc.php

#sql set
service mysql start
echo "source tmp/set_sql.sql" | mysql

# wordpress
wget https://wordpress.org/latest.tar.gz
tar -xvf latest.tar.gz
mv wordpress/ var/www/html/
chown -R www-data:www-data /var/www/html/wordpress

# wordpress file
cp -rp ./tmp/wp-config.php /var/www/html/wordpress

service nginx start
service php7.3-fpm start
service mysql restart

bash
