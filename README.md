# HackTheIRL2018
Here it is, direct from Devpost:

## Inspiration
Many of us have personally watched the lagoon's health progress go from bad to worse, particularly in the last few years. Algal blooms have become common-place; fish deaths are a regular news headline. We know that the lagoon has many advocates in the community willing to help, but there are few ways to meaningfully contribute. There are sensor platforms in the IRL but they are not placed very frequently. This infrequent placement is partly caused by the large initial investment required. This cost, coupled with the high cost of maintenance, can push the first year of ownership of a single sensor platform like ORCA's Kilroy near the six-figure mark with five-figure maintenance budgets every year for the rest of the unit's life. The cost has caused the State of Florida to cut the funding for Kilroy maintenance to just 8 units from 25. These remaining units simply cannot provide enough data points for researchers to make meaningful conclusions and predictions. This got us thinking - there are hundreds of residents along the Indian River Lagoon. With more sensor platforms, we know we can help track the progression of natural and human-influenced events. This is where SensiDock comes in. With the purchase of the product and the sensors that go with it, homeowners can do their part to protect the lagoon.

## What it does
SensiDock provides a way for residents to provide data to researchers that are seeking solutions to the lagoon's problems. By using homeowners' docks, the data can be crowd-sourced from up and down the lagoon. Each device will be affixed to a dock post and the probes will reach into the water to measure four of the most important data points. A fully-outfitted SensiDock will be capable of measuring temperature, pH, salinity and dissolved oxygen. This data will be available on the user's dashboard, as well as uploaded to a cloud-based repository that researchers and the public can tap into.

## What sets the SensiDock apart?
The differentiating attribute of the SensiDock is the price. The base unit is very affordable to homeowners, priced between 50 and 75 dollars. The sensors required for its operation can then be purchased separately and plugged in by the end user. This will be a seamless process and will also permit owners to purchase the individual sensors as they can afford them. This modularity makes the product available for those who cannot afford to spend several hundred dollars on helping the lagoon but instead can do smaller contributions over time.

### Accuracy
The accuracy of the device may be in question due to the low cost but the sensors that have been specified are education grade scientific instruments. They are not quite comparable to the Kilroy's, but at roughly 2% the price, we find this to be an acceptable compromise. A fully outfitted SensiDock will cost around $500. This price gets data that is accurate down to ±0.2°C, +/- 0.2 pH units, ±3% for salinity, and ±0.2 mg/L for DO.

### Day-to-day use
A user needs to maintain their SensiDock daily, raising it up and rinsing the sensors off with fresh water. During this process, the user's phone connects to the device over Bluetooth to transfer the day's data and upload it. A user can then check their dashboard to see what the water quality looks like.

### How we built it
The sensor stack consists of a Raspberry Pi Zero W for cost-effectiveness, an Arduino Nano with real-time clock for interfacing with sensors, and the sensors themselves. The Arduino reads the output of the sensors every 10 seconds, timestamps the data and passes it to the Raspberry Pi for local storage. The Raspberry Pi continues adding to this file until the user approaches the device and opens the app. When the device makes a connection to the app, the data is transferred as CSV to the phone. The phone is then free to upload this to the cloud for research and use it for display of the health of the water.

## Challenges we ran into
### How to get the data anywhere?
The data-handoff approach to uploading can be seen as a negative point because the data is not available in real-time. The SensiDock could be upgraded with a 4G cellular connection, but we chose to avoid this because the connection can be unreliable and it requires a wireless carrier and the associated monthly bill. A user's home wifi is typically limited to the areas directly surrounding the home and likely does not reach the dock. Therefore, this was ruled out as a possibility. Some creative thinking was employed to come up with another solution that passed out scrutineering. Out of this came the data-handoff approach utilizing Bluetooth 4.0. We decided since the user has to go out to the device regularly anyway, their phone can be used for an easy, reliable handoff.

## Accomplishments that we're proud of
•Bluetooth! It's the first time we've used it <br />
•We've only made one Android app before this event<br />
•First time using a Raspberry Pi Zero W in a hackathon<br />
•All of this was achieved with a team that was working together to teach a first-time hacker!<br />

## What we learned
•Development can be done on a Raspberry Pi 3B+ for ease of use and connection, then the SD card can just be transferred to the Zero W, with the only change being pairing the new Pi to the Android device since the Bluetooth MAC address changed.<br />
•First-time hacker got experience with Python, Java and Arduino C, all in one event<br />
•Another teammate had his first hands-on experience with Raspberry Pi and Arduino<br />
•How the community can help the lagoon!<br />

## What's next for SensiDock
•We plan to integrate a competitive aspect to the data collection, perhaps something similar to Snapchat's 'streaks'. This encourages users to check their devices and post new data daily so their friends can't get ahead of them.<br />
•We would like to have a data visualization system that more closely resembles a true dashboard and we would like to integrate elements of Material UI design<br />
•The server-side has not been fully configured, so we would like to host the data somewhere for the public to access it We would love to build them and actually deploy them in the community!<br />
