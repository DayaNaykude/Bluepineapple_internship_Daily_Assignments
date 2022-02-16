import React from "react";
import { Link } from "react-router-dom";
import Base from "./Base";

function Home() {
  let employees = [
    {
      id: 101,
      firstName: "Dayanand",
      lastName: "Naykude",
      companeyName: "Bluepineapple",
      Adrdress: "Pimpri Khurd,Pune",
      email: "daya@gmail.com",
      phone: "9579990229",
      additionalInformation: "NA",
      imageurl:
        "https://thumbs.dreamstime.com/b/photo-document-passport-id-mature-caucasian-man-suit-white-shirt-126121929.jpg",
    },
    {
      id: 102,
      firstName: "Subhash",
      lastName: "Jadhav",
      companeyName: "Bluepineapple",
      Adrdress: "Mahabaleshwar,Satara",
      email: "subhash@gmail.com",
      phone: "9587987655",
      additionalInformation: "NA",
      imageurl:
        "https://t4.ftcdn.net/jpg/01/05/31/33/360_F_105313352_hTQ4bjLIzieIducbRR0SifUkvKW8EJRl.jpg",
    },
    {
      id: 103,
      firstName: "Mayur",
      lastName: "Patil",
      companeyName: "Bluepineapple",
      Adrdress: "Amode Kh,Jalgaon",
      email: "mayur@gmail.com",
      phone: "9896365478",
      additionalInformation: "NA",
      imageurl:
        "https://thumbs.dreamstime.com/b/frontal-male-passport-photo-isolated-white-background-eu-standardization-frontal-male-passport-photo-isolated-white-149548031.jpg",
    },
    {
      id: 104,
      firstName: "Akshay",
      lastName: "Bavale",
      companeyName: "Bluepineapple",
      Adrdress: "Velapur,Solapur",
      email: "akshay@gmail.com",
      phone: "9765898974",
      additionalInformation: "NA",
      imageurl:
        "https://image.shutterstock.com/image-photo/passport-photo-portrait-middle-aged-260nw-1506715724.jpg",
    },
  ];

  return (
    <div className="main-home">
      <Base tittle="Welcome To My Application" discription="Employees list">
        <div className="row home-content">
          <div className="col-12">
            <p className="text-center my-3">
              Click On View details button to see details of Employee
            </p>
            <div className="row text-center mb-2 employee-row ">
              <div className="col-3">
                <h3 className=" text-left">Employee Id</h3>
              </div>
              <div className="col-3">
                <h3 className=" text-left">Name</h3>
              </div>
              <div className="col-3">
                <h3 className=" text-left">Email</h3>
              </div>
            </div>

            {employees.map((employee, index) => {
              return (
                <div key={index} className="row text-center mb-2 employee-row ">
                  <div className="col-3">
                    <h4 className=" text-left">{employee.id}</h4>
                  </div>
                  <div className="col-3">
                    <h4 className=" text-left">{employee.firstName}</h4>
                  </div>
                  <div className="col-3">
                    <h4 className=" text-left">{employee.email}</h4>
                  </div>
                  <div className="col-3">
                    <Link
                      className="btn btn-outline-dark"
                      to={{
                        pathname: "/viewdetails",
                        state: employee,
                      }}
                    >
                      <span className="">View Details</span>
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
