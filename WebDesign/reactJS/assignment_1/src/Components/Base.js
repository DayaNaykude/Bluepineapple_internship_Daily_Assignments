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
        <div className="jumbotron text-center base-header">
          <h2 className="display-4">{tittle}</h2>
          <p className="lead">{discription}</p>
        </div>

        <div className={classname}>{children}</div>
      </div>
      <footer className="footer bg-dark mt-auto py-3">
        <div className="container-fluid bg-secondary text-white text-center py-3">
          <h4>© 2022 Copyright: employeerecords.com</h4>
          <button className="btn btn-warning btn-sm">Contact Us</button>
        </div>
      </footer>
      <div>
        <p>Unity Is <span className="strength">Strength</span></p>
      </div>
    </div>
  );
}

export default Base;
