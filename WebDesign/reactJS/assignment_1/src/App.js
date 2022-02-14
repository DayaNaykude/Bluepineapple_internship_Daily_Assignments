import "./App.css";
import { BrowserRouter, Switch, Route } from "react-router-dom";
import Home from "./Components/Home";
import ViewDetails from "../src/Components/viewDetails";

function App() {
  return (
    <BrowserRouter>
      <Switch>
        <Route exact path="/" component={Home} />
        <Route exact path="/viewdetails" component={ViewDetails} />
      </Switch>
    </BrowserRouter>
  );
}

export default App;
