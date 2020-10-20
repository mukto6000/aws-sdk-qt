/*
    Copyright 2013-2020 Paul Colby

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

#include "composeenvironmentsrequest.h"
#include "composeenvironmentsrequest_p.h"
#include "composeenvironmentsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::ComposeEnvironmentsRequest
 * \brief The ComposeEnvironmentsRequest class provides an interface for ElasticBeanstalk ComposeEnvironments requests.
 *
 * \inmodule QtAwsElasticBeanstalk
 *
 *  <fullname>AWS Elastic Beanstalk</fullname>
 * 
 *  AWS Elastic Beanstalk makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running
 *  on the Amazon Web Services
 * 
 *  cloud>
 * 
 *  For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
 *  Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a
 *  href="http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that enable you to access the API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::composeEnvironments
 */

/*!
 * Constructs a copy of \a other.
 */
ComposeEnvironmentsRequest::ComposeEnvironmentsRequest(const ComposeEnvironmentsRequest &other)
    : ElasticBeanstalkRequest(new ComposeEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ComposeEnvironmentsRequest object.
 */
ComposeEnvironmentsRequest::ComposeEnvironmentsRequest()
    : ElasticBeanstalkRequest(new ComposeEnvironmentsRequestPrivate(ElasticBeanstalkRequest::ComposeEnvironmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ComposeEnvironmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ComposeEnvironmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ComposeEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new ComposeEnvironmentsResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::ComposeEnvironmentsRequestPrivate
 * \brief The ComposeEnvironmentsRequestPrivate class provides private implementation for ComposeEnvironmentsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a ComposeEnvironmentsRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
ComposeEnvironmentsRequestPrivate::ComposeEnvironmentsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, ComposeEnvironmentsRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ComposeEnvironmentsRequest
 * class' copy constructor.
 */
ComposeEnvironmentsRequestPrivate::ComposeEnvironmentsRequestPrivate(
    const ComposeEnvironmentsRequestPrivate &other, ComposeEnvironmentsRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
