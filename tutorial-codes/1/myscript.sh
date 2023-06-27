#!/bin/bash
touch output
message="this is an example of a multiline bash program (shell script)"
echo $message
echo "The message will be stored in the file output too"
echo $message > output
