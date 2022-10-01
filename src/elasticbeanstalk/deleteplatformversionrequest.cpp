// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteplatformversionrequest.h"
#include "deleteplatformversionrequest_p.h"
#include "deleteplatformversionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::DeletePlatformVersionRequest
 * \brief The DeletePlatformVersionRequest class provides an interface for ElasticBeanstalk DeletePlatformVersion requests.
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
 *  href="https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
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
 * \sa ElasticBeanstalkClient::deletePlatformVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePlatformVersionRequest::DeletePlatformVersionRequest(const DeletePlatformVersionRequest &other)
    : ElasticBeanstalkRequest(new DeletePlatformVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePlatformVersionRequest object.
 */
DeletePlatformVersionRequest::DeletePlatformVersionRequest()
    : ElasticBeanstalkRequest(new DeletePlatformVersionRequestPrivate(ElasticBeanstalkRequest::DeletePlatformVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePlatformVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePlatformVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePlatformVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeletePlatformVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::DeletePlatformVersionRequestPrivate
 * \brief The DeletePlatformVersionRequestPrivate class provides private implementation for DeletePlatformVersionRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a DeletePlatformVersionRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
DeletePlatformVersionRequestPrivate::DeletePlatformVersionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DeletePlatformVersionRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePlatformVersionRequest
 * class' copy constructor.
 */
DeletePlatformVersionRequestPrivate::DeletePlatformVersionRequestPrivate(
    const DeletePlatformVersionRequestPrivate &other, DeletePlatformVersionRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
