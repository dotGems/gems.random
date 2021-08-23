# #!/bin/bash

cleos push action tester test1 '[1]' -p tester

cleos push action tester test1 '[100]' -p tester

cleos push action tester test2 '[10, 1, 100]' -p tester

cleos push action tester test3 '[10, "44760f2272cf1cebe1c937accdb6b7b5b8b571b8eb149ad1f11a4016f78cdf42"]' -p tester

cleos push action tester test4 '[10, "2021-08-21T00:00:00"]' -p tester

cleos push action tester test5 '[10, "44760f2272cf1cebe1c937accdb6b7b5b8b571b8eb149ad1f11a4016f78cdf42", "2021-08-21T00:00:00", -10, 10, 12345, true]' -p tester

cleos push action tester test5 '[100, "44760f2272cf1cebe1c937accdb6b7b5b8b571b8eb149ad1f11a4016f78cdf42", "2021-08-21T00:00:00", 0, 1, 12345, false]' -p tester