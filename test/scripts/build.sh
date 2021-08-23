#!/bin/bash

blanc++ tester.cpp -I ../..

# unlock wallet & deploy
cleos wallet unlock --password $(cat ~/eosio-wallet/.pass)
cleos set contract tester . tester.wasm tester.abi
