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

#include "describereportjobrequest.h"
#include "describereportjobrequest_p.h"
#include "describereportjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeReportJobRequest
 * \brief The DescribeReportJobRequest class provides an interface for Backup DescribeReportJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeReportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReportJobRequest::DescribeReportJobRequest(const DescribeReportJobRequest &other)
    : BackupRequest(new DescribeReportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReportJobRequest object.
 */
DescribeReportJobRequest::DescribeReportJobRequest()
    : BackupRequest(new DescribeReportJobRequestPrivate(BackupRequest::DescribeReportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeReportJobRequestPrivate
 * \brief The DescribeReportJobRequestPrivate class provides private implementation for DescribeReportJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeReportJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeReportJobRequestPrivate::DescribeReportJobRequestPrivate(
    const BackupRequest::Action action, DescribeReportJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReportJobRequest
 * class' copy constructor.
 */
DescribeReportJobRequestPrivate::DescribeReportJobRequestPrivate(
    const DescribeReportJobRequestPrivate &other, DescribeReportJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
