COMPONENT=BlinkToRadioAppC
BUILD_EXTRA_DEPS += BlinkToRadio.class
CLEAN_EXTRA = *.class BlinkToRadioMsg.java

CFLAGS += -I$(TOSDIR)/lib/T2Hack

TestSerial.class: $(wildcard *.java) BlinkToRadioMsg.java
	javac -target 1.4 -source 1.4 *.java

TestSerialMsg.java:
	mig java -target=null $(CFLAGS) -java-classname=BlinkToRadioMsg BlinkToRadio.h BlinkToRadio_msg -o $@

include $(MAKERULES)

