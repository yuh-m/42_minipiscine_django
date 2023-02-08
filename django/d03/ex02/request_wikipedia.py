#!/bin/python3

import json
import requests
import dewiki
import sys


# the response needs to be dewiki
#output_file = request_name + '.wiki'
def write_output(page, output):


def request_wiki():

    if (len(sys.argv) == 2):
        url = "https://en.wikipedia.org/w/api.php?"
        parameters = {
            'action':'parse',
            'page': sys.argv[1],
            'format':'json',
            'prop':'wikitext'
        }

        response = requests.get(url, params=parameters)
        if response.status_code != 200:
            print("Error - ", response)
            return (0)
        
        message = response.text
        message = json.loads(message)
        try:
            message = message['parse']['wikitext']['*']
        except:
            print("Page not found")
            print(message)
            quit()
        output = dewiki.from_string(message)
        
        #write output
        
        print(output)

        
if __name__=="__main__":
    request_wiki()