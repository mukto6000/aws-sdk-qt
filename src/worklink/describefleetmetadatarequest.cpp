// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetmetadatarequest.h"
#include "describefleetmetadatarequest_p.h"
#include "describefleetmetadataresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeFleetMetadataRequest
 * \brief The DescribeFleetMetadataRequest class provides an interface for WorkLink DescribeFleetMetadata requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeFleetMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetMetadataRequest::DescribeFleetMetadataRequest(const DescribeFleetMetadataRequest &other)
    : WorkLinkRequest(new DescribeFleetMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetMetadataRequest object.
 */
DescribeFleetMetadataRequest::DescribeFleetMetadataRequest()
    : WorkLinkRequest(new DescribeFleetMetadataRequestPrivate(WorkLinkRequest::DescribeFleetMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetMetadataRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::DescribeFleetMetadataRequestPrivate
 * \brief The DescribeFleetMetadataRequestPrivate class provides private implementation for DescribeFleetMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeFleetMetadataRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
DescribeFleetMetadataRequestPrivate::DescribeFleetMetadataRequestPrivate(
    const WorkLinkRequest::Action action, DescribeFleetMetadataRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetMetadataRequest
 * class' copy constructor.
 */
DescribeFleetMetadataRequestPrivate::DescribeFleetMetadataRequestPrivate(
    const DescribeFleetMetadataRequestPrivate &other, DescribeFleetMetadataRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
