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

#include "getdataqualitymetricsrequest.h"
#include "getdataqualitymetricsrequest_p.h"
#include "getdataqualitymetricsresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetDataQualityMetricsRequest
 * \brief The GetDataQualityMetricsRequest class provides an interface for LookoutMetrics GetDataQualityMetrics requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getDataQualityMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataQualityMetricsRequest::GetDataQualityMetricsRequest(const GetDataQualityMetricsRequest &other)
    : LookoutMetricsRequest(new GetDataQualityMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataQualityMetricsRequest object.
 */
GetDataQualityMetricsRequest::GetDataQualityMetricsRequest()
    : LookoutMetricsRequest(new GetDataQualityMetricsRequestPrivate(LookoutMetricsRequest::GetDataQualityMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataQualityMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataQualityMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataQualityMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetDataQualityMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::GetDataQualityMetricsRequestPrivate
 * \brief The GetDataQualityMetricsRequestPrivate class provides private implementation for GetDataQualityMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetDataQualityMetricsRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
GetDataQualityMetricsRequestPrivate::GetDataQualityMetricsRequestPrivate(
    const LookoutMetricsRequest::Action action, GetDataQualityMetricsRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataQualityMetricsRequest
 * class' copy constructor.
 */
GetDataQualityMetricsRequestPrivate::GetDataQualityMetricsRequestPrivate(
    const GetDataQualityMetricsRequestPrivate &other, GetDataQualityMetricsRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
