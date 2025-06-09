`mynode.py`
a simple ros node. just creates a timer and prints counter value

`numpub.py`
publishes a number in `number` topic for every x seconds and x, and the frequency is defined by parameters

`numsub.py`
subscribes to `number` topic and also creates a server `reset_counter`

`client.py`
sends request to `reset_counter` server
