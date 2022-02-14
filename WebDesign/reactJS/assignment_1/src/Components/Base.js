import React from "react";

function Base({
    tittle = "My Tittle",
    discription = "My Discription",
    classname = " p-4",
    children,
  }) {
  return (
    <div>
       <div className="container-fluid">
      <div className="jumbotron bg-dark text-white text-center">
        <h2 className="display-4">{tittle}</h2>
        <p className="lead">{discription}</p>
      </div>
      <div className={classname}>{children}</div>
    </div>
      <footer className="footer bg-dark mt-auto py-3">
        <div className="container-fluid bg-secondary text-white text-center py-3">
          <h4>© 2022 Copyright: DNPaintings.com</h4>
          <button className="btn btn-warning btn-lg">Contact Us</button>
        </div>
        <div className="container">
          <span className="text-muted">
            An Amazing Place to buy <span className="text-white">Paintings</span>
          </span>
        </div>
      </footer>
    </div>
  );
}

export default Base;
