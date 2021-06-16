/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionrequest_p.h"
#include "applypendingmaintenanceactionresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/*!
 * \class QtAws::RDS::ApplyPendingMaintenanceActionRequest
 * \brief The ApplyPendingMaintenanceActionRequest class provides an interface for RDS ApplyPendingMaintenanceAction requests.
 *
 * \inmodule QtAwsRDS
 *
 *  <fullname>Amazon Relational Database Service</fullname>
 * 
 * 
 *  </p
 * 
 *  Amazon Relational Database Service (Amazon RDS) is a web service that makes it easier to set up, operate, and scale a
 *  relational database in the cloud. It provides cost-efficient, resizeable capacity for an industry-standard relational
 *  database and manages common database administration tasks, freeing up developers to focus on what makes their
 *  applications and businesses
 * 
 *  unique>
 * 
 *  Amazon RDS gives you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL Server, Oracle, or Amazon
 *  Aurora database server. These capabilities mean that the code, applications, and tools you already use today with your
 *  existing databases work with Amazon RDS without modification. Amazon RDS automatically backs up your database and
 *  maintains the database software that powers your DB instance. Amazon RDS is flexible: you can scale your DB instance's
 *  compute resources and storage capacity to meet your application's demand. As with all Amazon Web Services, there are no
 *  up-front investments, and you pay only for the resources you
 * 
 *  use>
 * 
 *  This interface reference for Amazon RDS contains documentation for a programming or command line interface you can use
 *  to manage Amazon RDS. Amazon RDS is asynchronous, which means that some interfaces might require techniques such as
 *  polling or callback functions to determine when a command has been applied. In this reference, the parameter
 *  descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the maintenance
 *  window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon RDS API Reference</b>
 * 
 *  </p <ul> <li>
 * 
 *  For the alphabetical list of API actions, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
 * 
 *  Actions</a>> </li> <li>
 * 
 *  For the alphabetical list of data types, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
 * 
 *  Types</a>> </li> <li>
 * 
 *  For a list of common query parameters, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
 * 
 *  Parameters</a>> </li> <li>
 * 
 *  For descriptions of the error codes, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
 * 
 *  Errors</a>> </li> </ul>
 * 
 *  <b>Amazon RDS User Guide</b>
 * 
 *  </p <ul> <li>
 * 
 *  For a summary of the Amazon RDS interfaces, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available RDS
 * 
 *  Interfaces</a>> </li> <li>
 * 
 *  For more information about how to use the Query API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using the Query
 *
 * \sa RdsClient::applyPendingMaintenanceAction
 */

/*!
 * Constructs a copy of \a other.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest(const ApplyPendingMaintenanceActionRequest &other)
    : RdsRequest(new ApplyPendingMaintenanceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ApplyPendingMaintenanceActionRequest object.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest()
    : RdsRequest(new ApplyPendingMaintenanceActionRequestPrivate(RdsRequest::ApplyPendingMaintenanceActionAction, this))
{

}

/*!
 * \reimp
 */
bool ApplyPendingMaintenanceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ApplyPendingMaintenanceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ApplyPendingMaintenanceActionRequest::response(QNetworkReply * const reply) const
{
    return new ApplyPendingMaintenanceActionResponse(*this, reply);
}

/*!
 * \class QtAws::RDS::ApplyPendingMaintenanceActionRequestPrivate
 * \brief The ApplyPendingMaintenanceActionRequestPrivate class provides private implementation for ApplyPendingMaintenanceActionRequest.
 * \internal
 *
 * \inmodule QtAwsRDS
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionRequestPrivate object for Rds \a action,
 * with public implementation \a q.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const RdsRequest::Action action, ApplyPendingMaintenanceActionRequest * const q)
    : RdsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ApplyPendingMaintenanceActionRequest
 * class' copy constructor.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const ApplyPendingMaintenanceActionRequestPrivate &other, ApplyPendingMaintenanceActionRequest * const q)
    : RdsRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
