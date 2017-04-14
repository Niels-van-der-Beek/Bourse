FROM python:2.7.12-slim

RUN apt-get update && apt-get install -y \
	gcc \
	build-essential \
	python2.7-dev \
	tk-dev \
	tk \
	tcl-dev \
	tcl

COPY ./requirements.txt /opt/app/requirements.txt

RUN pip install -r /opt/app/requirements.txt

COPY ./Code-Source /opt/app/Code-Source
COPY ./main.py /opt/app/main.py

WORKDIR /opt/app

# CMD [ "python", "/opt/app/main.py" ]

RUN gcc ./Code-Source/Prices.c
CMD [ "./a.out"]
