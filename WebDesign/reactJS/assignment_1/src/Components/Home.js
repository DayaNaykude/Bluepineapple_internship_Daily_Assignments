import React from "react";
import { Link } from "react-router-dom";
import Base from "./Base";

function Home() {
  let employees = [
    {
      id: 1,
      firstName: "Dayanand",
      lastName: "Naykude",
      companeyName: "Bluepineapple",
      Adrdress: "pimpri Khurd",
      email: "daya@gmail.com",
      phone: "9579990229",
      additionalInformation: "NA",
    },
    {
      id: 2,
      firstName: "Subhash",
      lastName: "Jadhav",
      companeyName: "Bluepineapple",
      Adrdress: "satara",
      email: "subhash@gmail.com",
      phone: "9587987655",
      additionalInformation: "NA",
    },
    {
      id: 3,
      firstName: "Mayur",
      lastName: "Patil",
      companeyName: "Bluepineapple",
      Adrdress: "Jalgaon",
      email: "mayur@gmail.com",
      phone: "9896365478",
      additionalInformation: "NA",
    },
    {
      id: 4,
      firstName: "Akshay",
      lastName: "Bavale",
      companeyName: "Bluepineapple",
      Adrdress: "Solapur",
      email: "akshay@gmail.com",
      phone: "9765898974",
      additionalInformation: "NA",
    },
  ];

  return (
    <div>
      <Base tittle="Welcome to My Application" discription="See All Paintings">
        <div className="row">
          <div className="col-12">
            <h2 className="text-center text-white my-3">
              Total {employees.length} paintings
            </h2>

            {employees.map((employee, index) => {
              return (
                <div key={index} className="row text-center mb-2 ">
                  <div className="col-4">
                    <h3 className=" text-left">{employee.firstName}</h3>
                  </div>
                  <div className="col-4">
                    <Link
                      className="btn btn-success rounded"
                      to="/viewdetails"
                      state={{ emp: employee }}
                    >
                      <span className="">Update</span>
                    </Link>
                  </div>
                </div>
              );
            })}
          </div>
        </div>
      </Base>
    </div>
  );
}

export default Home;
