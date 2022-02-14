import "./App.css";
import React from "react";

const App = () => {
  const [success, setSuccess] = React.useState(false);
  return (
    <div>
      <div className={success ? "App-true" : "App-false"}>
        <h1>Hello World !</h1>
      </div>
      <div className="button">
        {!success && (
          <button
            type="button"
            onClick={() => {
              setSuccess(true);
            }}
            class="btn btn-outline-secondary "
          >
            Show Messege
          </button>
        )}
        {success && (
          <button
            type="button"
            onClick={() => {
              setSuccess(false);
            }}
            class="btn btn-outline-secondary "
          >
            Hide Messege
          </button>
        )}
      </div>
    </div>
  );
};

export default App;
