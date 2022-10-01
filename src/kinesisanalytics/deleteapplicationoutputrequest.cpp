// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationoutputrequest.h"
#include "deleteapplicationoutputrequest_p.h"
#include "deleteapplicationoutputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationOutputRequest
 * \brief The DeleteApplicationOutputRequest class provides an interface for KinesisAnalytics DeleteApplicationOutput requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::deleteApplicationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationOutputRequest::DeleteApplicationOutputRequest(const DeleteApplicationOutputRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationOutputRequest object.
 */
DeleteApplicationOutputRequest::DeleteApplicationOutputRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationOutputRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationOutputRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationOutputRequestPrivate
 * \brief The DeleteApplicationOutputRequestPrivate class provides private implementation for DeleteApplicationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationOutputRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
DeleteApplicationOutputRequestPrivate::DeleteApplicationOutputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationOutputRequest
 * class' copy constructor.
 */
DeleteApplicationOutputRequestPrivate::DeleteApplicationOutputRequestPrivate(
    const DeleteApplicationOutputRequestPrivate &other, DeleteApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
