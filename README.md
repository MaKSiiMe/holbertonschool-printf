Start
|
|--> Input: "Format string"
|
|--> For each character in the format string:
      |
      |--> If character == '%':
              |
              |--> Move to next character
              |
              |--> If next character == 'c':
                      |--> Print character argument
              |
              |--> Else if next character == 's':
                      |--> Print string argument
              |
              |--> Else if next character == '%':
                      |--> Print '%'
              |
              |--> Else if next character == 'd' or 'i':
                      |--> Print integer argument
              |
              |--> Else:
                      |--> Print error: "Unsupported format specifier"
      |
      |--> Else:
              |--> Print character as-is
|
|--> End

