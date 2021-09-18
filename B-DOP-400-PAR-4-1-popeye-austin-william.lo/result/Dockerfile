FROM node:12-alpine
WORKDIR /usr/src/app
COPY package*.json ./
RUN npm install
EXPOSE 80
ENV PORT 80
CMD [ "node", "server.js" ]