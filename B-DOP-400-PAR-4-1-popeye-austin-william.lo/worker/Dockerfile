FROM maven:3.5-jdk-8-alpine as builder
COPY pom.xml ./
RUN mvn dependency:resolve
RUN mvn package

FROM openjdk:8-jre-alpine
CMD [ "java", "-jar worker-jar-with-dependencies.jar" ] 