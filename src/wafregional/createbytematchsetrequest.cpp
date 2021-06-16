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

#include "createbytematchsetrequest.h"
#include "createbytematchsetrequest_p.h"
#include "createbytematchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::CreateByteMatchSetRequest
 * \brief The CreateByteMatchSetRequest class provides an interface for WAFRegional CreateByteMatchSet requests.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
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
 *  This is the <i>AWS WAF Regional Classic API Reference</i> for using AWS WAF Classic with the AWS resources, Elastic Load
 *  Balancing (ELB) Application Load Balancers and API Gateway APIs. The AWS WAF Classic actions and data types listed in
 *  the reference are available for protecting Elastic Load Balancing (ELB) Application Load Balancers and API Gateway APIs.
 *  You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF Classic API actions, data types, and errors. For detailed
 *  information about AWS WAF Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WAFRegionalClient::createByteMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateByteMatchSetRequest::CreateByteMatchSetRequest(const CreateByteMatchSetRequest &other)
    : WAFRegionalRequest(new CreateByteMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateByteMatchSetRequest object.
 */
CreateByteMatchSetRequest::CreateByteMatchSetRequest()
    : WAFRegionalRequest(new CreateByteMatchSetRequestPrivate(WAFRegionalRequest::CreateByteMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateByteMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateByteMatchSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateByteMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateByteMatchSetResponse(*this, reply);
}

/*!
 * \class QtAws::WAFRegional::CreateByteMatchSetRequestPrivate
 * \brief The CreateByteMatchSetRequestPrivate class provides private implementation for CreateByteMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a CreateByteMatchSetRequestPrivate object for WAFRegional \a action,
 * with public implementation \a q.
 */
CreateByteMatchSetRequestPrivate::CreateByteMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, CreateByteMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateByteMatchSetRequest
 * class' copy constructor.
 */
CreateByteMatchSetRequestPrivate::CreateByteMatchSetRequestPrivate(
    const CreateByteMatchSetRequestPrivate &other, CreateByteMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
