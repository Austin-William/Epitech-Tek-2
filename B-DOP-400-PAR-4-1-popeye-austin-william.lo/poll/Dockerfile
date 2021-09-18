FROM python:latest
COPY app.py /
COPY requirements.txt /tmp
WORKDIR /tmp
RUN pip install -r requirements.txt
EXPOSE 80
CMD [ "flask", "run", "--host=0.0.0.0", "port=80" ]