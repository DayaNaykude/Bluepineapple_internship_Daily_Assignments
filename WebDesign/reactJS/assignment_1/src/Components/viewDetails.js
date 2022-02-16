import React from "react";
import { Link, useLocation } from "react-router-dom";
import Base from "./Base";

const ViewDetails = () => {
  const location = useLocation();

  console.log(location.state);

  return (
    <div className="main-viewDtails">
      <Base tittle="Welcome To My Application" discription="Employee Details">
        <div className="view-detailas-row">
          <div main-div-card-backButton>
            <Link className="btn btn-success" to="/">
              Back
            </Link>
          </div>
          <div className="main-div-card">
            <div className="card card-photo">
              <img
                className="card-img-top img-size"
                src={location.state.imageurl}
                alt="cap"
              />
            </div>
          </div>
          <div className="view-details-form">
            <form>
              <div class="row mb-4">
                <div class="col">
                  <div class="form-outline">
                    <input
                      type="text"
                      id="form6Example1"
                      class="form-control"
                      value={location.state.firstName}
                    />
                    <label class="form-label" for="form6Example1">
                      First name
                    </label>
                  </div>
                </div>
                <div class="col">
                  <div class="form-outline">
                    <input
                      type="text"
                      id="form6Example2"
                      class="form-control"
                      value={location.state.lastName}
                    />
                    <label class="form-label" for="form6Example2">
                      Last name
                    </label>
                  </div>
                </div>
              </div>

              <div class="form-outline mb-4">
                <input
                  type="text"
                  id="form6Example3"
                  class="form-control"
                  value={location.state.companeyName}
                />
                <label class="form-label" for="form6Example3">
                  Company name
                </label>
              </div>

              <div class="form-outline mb-4">
                <input
                  type="text"
                  id="form6Example4"
                  class="form-control"
                  value={location.state.Adrdress}
                />
                <label class="form-label" for="form6Example4">
                  Address
                </label>
              </div>

              <div class="form-outline mb-4">
                <input
                  type="email"
                  id="form6Example5"
                  class="form-control"
                  value={location.state.email}
                />
                <label class="form-label" for="form6Example5">
                  Email
                </label>
              </div>

              <div class="form-outline mb-4">
                <input
                  type="number"
                  id="form6Example6"
                  class="form-control"
                  value={location.state.phone}
                />
                <label class="form-label" for="form6Example6">
                  Phone
                </label>
              </div>

              <div class="form-outline mb-4">
                <textarea
                  class="form-control"
                  id="form6Example7"
                  rows="4"
                  value={location.state.additionalInformation}
                ></textarea>
                <label class="form-label" for="form6Example7">
                  Additional information
                </label>
              </div>
            </form>
          </div>
        </div>
      </Base>
    </div>
  );
};

export default ViewDetails;
