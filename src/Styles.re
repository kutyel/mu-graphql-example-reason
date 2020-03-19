let blue = "#48a9dc";

let style = {j|
  body {
    background-color: rgb(224, 226, 229);
    display: flex;
    flex-direction: column;
    align-items: center;
  }
  button {
    background-color: white;
    color: $blue;
    box-shadow: 0 0 0 1px $blue;
    border: none;
    padding: 8px;
    font-size: 16px;
  }
  button:active {
    background-color: $blue;
    color: white;
  }
  .container {
    margin: 12px 0px;
    box-shadow: 0px 4px 16px rgb(200, 200, 200);
    width: 720px;
    border-radius: 12px;
    font-family: sans-serif;
  }
  .containerTitle {
    background-color: rgb(242, 243, 245);
    border-radius: 12px 12px 0px 0px;
    padding: 12px;
    font-weight: bold;
  }
  .containerContent {
    background-color: white;
    padding: 16px;
    border-radius: 0px 0px 12px 12px;
  }
|j};