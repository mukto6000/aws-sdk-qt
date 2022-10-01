// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrulespackagesrequest.h"
#include "listrulespackagesrequest_p.h"
#include "listrulespackagesresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListRulesPackagesRequest
 * \brief The ListRulesPackagesRequest class provides an interface for Inspector ListRulesPackages requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listRulesPackages
 */

/*!
 * Constructs a copy of \a other.
 */
ListRulesPackagesRequest::ListRulesPackagesRequest(const ListRulesPackagesRequest &other)
    : InspectorRequest(new ListRulesPackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRulesPackagesRequest object.
 */
ListRulesPackagesRequest::ListRulesPackagesRequest()
    : InspectorRequest(new ListRulesPackagesRequestPrivate(InspectorRequest::ListRulesPackagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRulesPackagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRulesPackagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRulesPackagesRequest::response(QNetworkReply * const reply) const
{
    return new ListRulesPackagesResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::ListRulesPackagesRequestPrivate
 * \brief The ListRulesPackagesRequestPrivate class provides private implementation for ListRulesPackagesRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListRulesPackagesRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
ListRulesPackagesRequestPrivate::ListRulesPackagesRequestPrivate(
    const InspectorRequest::Action action, ListRulesPackagesRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRulesPackagesRequest
 * class' copy constructor.
 */
ListRulesPackagesRequestPrivate::ListRulesPackagesRequestPrivate(
    const ListRulesPackagesRequestPrivate &other, ListRulesPackagesRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
