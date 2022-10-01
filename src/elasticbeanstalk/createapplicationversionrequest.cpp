// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationversionrequest.h"
#include "createapplicationversionrequest_p.h"
#include "createapplicationversionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::CreateApplicationVersionRequest
 * \brief The CreateApplicationVersionRequest class provides an interface for ElasticBeanstalk CreateApplicationVersion requests.
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
 * \sa ElasticBeanstalkClient::createApplicationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationVersionRequest::CreateApplicationVersionRequest(const CreateApplicationVersionRequest &other)
    : ElasticBeanstalkRequest(new CreateApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationVersionRequest object.
 */
CreateApplicationVersionRequest::CreateApplicationVersionRequest()
    : ElasticBeanstalkRequest(new CreateApplicationVersionRequestPrivate(ElasticBeanstalkRequest::CreateApplicationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::CreateApplicationVersionRequestPrivate
 * \brief The CreateApplicationVersionRequestPrivate class provides private implementation for CreateApplicationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a CreateApplicationVersionRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
CreateApplicationVersionRequestPrivate::CreateApplicationVersionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, CreateApplicationVersionRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationVersionRequest
 * class' copy constructor.
 */
CreateApplicationVersionRequestPrivate::CreateApplicationVersionRequestPrivate(
    const CreateApplicationVersionRequestPrivate &other, CreateApplicationVersionRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
