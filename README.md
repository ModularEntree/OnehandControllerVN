# Onehand controller

Controller for onehand only, meant for playing VNs or few input games. 

## HW info
Design is not yet really implemented, but for build, needed parts are:
- Raspberry Pi Pico W (Main controller)
- Seeed XIAO nRF52840 (Dongle)
- N buttons = 10?
    - 4 for action buttons
    - 2 for triggers
    - turn-off
    - special button
    - reset button
    - BT button 
- Vibrate motor?
- 3D printed shell for dongle and controller
    - It is expected to have Logitech mouse-like dummy port (where to put dongle when its not used)
    - VR controller like holding
    - It will, probably, have pretty falic (:gachi:) shape
    - Speaker holes and hole for reset button
- Battery shell
- Status LED, probably RGB one
- Speaker? It would be cool
- And many wires

## SW info
For software, following features are expected:
- Two connection modes, Dongle (primary) and BT (secondary)
- For BT mode, you will need to switch it to BT mode by pressing pairing button
- Of course, there will be button (or switch) to turn it on/off
- When turned on, it will try to establish private link between himself and dongle
- Dongle, when is in PC, it will behave as controller
- It will have bindable buttons or prebinded ones, i am more fan of the first one
- It will have speaker same as normal controller
- It will show status through LED:
    - BLUE is BT
    - blinking BLUE is pairing BT mode
    - WHITE is on
    - blinking WHITE is idk // TODO
    - RED is error; which type you wanna know? IDK YET! // TODO