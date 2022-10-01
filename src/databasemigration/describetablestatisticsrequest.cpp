// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetablestatisticsrequest.h"
#include "describetablestatisticsrequest_p.h"
#include "describetablestatisticsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeTableStatisticsRequest
 * \brief The DescribeTableStatisticsRequest class provides an interface for DatabaseMigration DescribeTableStatistics requests.
 *
 * \inmodule QtAwsDatabaseMigration
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 *
 * \sa DatabaseMigrationClient::describeTableStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTableStatisticsRequest::DescribeTableStatisticsRequest(const DescribeTableStatisticsRequest &other)
    : DatabaseMigrationRequest(new DescribeTableStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTableStatisticsRequest object.
 */
DescribeTableStatisticsRequest::DescribeTableStatisticsRequest()
    : DatabaseMigrationRequest(new DescribeTableStatisticsRequestPrivate(DatabaseMigrationRequest::DescribeTableStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTableStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTableStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTableStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTableStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeTableStatisticsRequestPrivate
 * \brief The DescribeTableStatisticsRequestPrivate class provides private implementation for DescribeTableStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeTableStatisticsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeTableStatisticsRequestPrivate::DescribeTableStatisticsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeTableStatisticsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTableStatisticsRequest
 * class' copy constructor.
 */
DescribeTableStatisticsRequestPrivate::DescribeTableStatisticsRequestPrivate(
    const DescribeTableStatisticsRequestPrivate &other, DescribeTableStatisticsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
