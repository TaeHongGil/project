FROM	debian:buster

LABEL	maintainer="tgil"

RUN	apt-get -y update && apt-get install -y \
	nginx \
	mariadb-server \
	php-mysql \
	openssl \
	wget \
	php-fpm

COPY	./srcs/ft_server.sh ./
COPY	./srcs/default ./tmp
COPY	./srcs/wp-config.php ./tmp
COPY	./srcs/config.inc.php ./tmp
COPY	./srcs/set_sql.sql ./tmp

EXPOSE	80 443

CMD 	bash ft_server.sh

