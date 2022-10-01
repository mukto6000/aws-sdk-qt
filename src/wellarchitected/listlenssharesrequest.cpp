// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlenssharesrequest.h"
#include "listlenssharesrequest_p.h"
#include "listlenssharesresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListLensSharesRequest
 * \brief The ListLensSharesRequest class provides an interface for WellArchitected ListLensShares requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listLensShares
 */

/*!
 * Constructs a copy of \a other.
 */
ListLensSharesRequest::ListLensSharesRequest(const ListLensSharesRequest &other)
    : WellArchitectedRequest(new ListLensSharesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLensSharesRequest object.
 */
ListLensSharesRequest::ListLensSharesRequest()
    : WellArchitectedRequest(new ListLensSharesRequestPrivate(WellArchitectedRequest::ListLensSharesAction, this))
{

}

/*!
 * \reimp
 */
bool ListLensSharesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLensSharesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLensSharesRequest::response(QNetworkReply * const reply) const
{
    return new ListLensSharesResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::ListLensSharesRequestPrivate
 * \brief The ListLensSharesRequestPrivate class provides private implementation for ListLensSharesRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListLensSharesRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
ListLensSharesRequestPrivate::ListLensSharesRequestPrivate(
    const WellArchitectedRequest::Action action, ListLensSharesRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLensSharesRequest
 * class' copy constructor.
 */
ListLensSharesRequestPrivate::ListLensSharesRequestPrivate(
    const ListLensSharesRequestPrivate &other, ListLensSharesRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
