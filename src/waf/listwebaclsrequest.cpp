// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwebaclsrequest.h"
#include "listwebaclsrequest_p.h"
#include "listwebaclsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::ListWebACLsRequest
 * \brief The ListWebACLsRequest class provides an interface for Waf ListWebACLs requests.
 *
 * \inmodule QtAwsWaf
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 * 
 *  guide>
 * 
 *  <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 *  latest version, AWS WAF has a single set of endpoints for regional and global use.
 * 
 *  </p </note>
 * 
 *  This is the <i>AWS WAF Classic API Reference</i> for using AWS WAF Classic with Amazon CloudFront. The AWS WAF Classic
 *  actions and data types listed in the reference are available for protecting Amazon CloudFront distributions. You can use
 *  these actions and data types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed
 *  information about the AWS WAF Classic API actions, data types, and errors. For detailed information about AWS WAF
 *  Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WafClient::listWebACLs
 */

/*!
 * Constructs a copy of \a other.
 */
ListWebACLsRequest::ListWebACLsRequest(const ListWebACLsRequest &other)
    : WafRequest(new ListWebACLsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWebACLsRequest object.
 */
ListWebACLsRequest::ListWebACLsRequest()
    : WafRequest(new ListWebACLsRequestPrivate(WafRequest::ListWebACLsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWebACLsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWebACLsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWebACLsRequest::response(QNetworkReply * const reply) const
{
    return new ListWebACLsResponse(*this, reply);
}

/*!
 * \class QtAws::Waf::ListWebACLsRequestPrivate
 * \brief The ListWebACLsRequestPrivate class provides private implementation for ListWebACLsRequest.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a ListWebACLsRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
ListWebACLsRequestPrivate::ListWebACLsRequestPrivate(
    const WafRequest::Action action, ListWebACLsRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWebACLsRequest
 * class' copy constructor.
 */
ListWebACLsRequestPrivate::ListWebACLsRequestPrivate(
    const ListWebACLsRequestPrivate &other, ListWebACLsRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace Waf
} // namespace QtAws
