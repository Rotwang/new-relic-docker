FROM scratch
MAINTAINER Platform Automation

ADD pause /pause
ADD newrelic /newrelic
VOLUME /newrelic

CMD ["/pause"]
