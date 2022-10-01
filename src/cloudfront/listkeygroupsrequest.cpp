// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listkeygroupsrequest.h"
#include "listkeygroupsrequest_p.h"
#include "listkeygroupsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListKeyGroupsRequest
 * \brief The ListKeyGroupsRequest class provides an interface for CloudFront ListKeyGroups requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listKeyGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListKeyGroupsRequest::ListKeyGroupsRequest(const ListKeyGroupsRequest &other)
    : CloudFrontRequest(new ListKeyGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListKeyGroupsRequest object.
 */
ListKeyGroupsRequest::ListKeyGroupsRequest()
    : CloudFrontRequest(new ListKeyGroupsRequestPrivate(CloudFrontRequest::ListKeyGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListKeyGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListKeyGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListKeyGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListKeyGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListKeyGroupsRequestPrivate
 * \brief The ListKeyGroupsRequestPrivate class provides private implementation for ListKeyGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListKeyGroupsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListKeyGroupsRequestPrivate::ListKeyGroupsRequestPrivate(
    const CloudFrontRequest::Action action, ListKeyGroupsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListKeyGroupsRequest
 * class' copy constructor.
 */
ListKeyGroupsRequestPrivate::ListKeyGroupsRequestPrivate(
    const ListKeyGroupsRequestPrivate &other, ListKeyGroupsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
