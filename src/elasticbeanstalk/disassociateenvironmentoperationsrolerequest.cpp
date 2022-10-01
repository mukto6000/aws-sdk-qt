// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateenvironmentoperationsrolerequest.h"
#include "disassociateenvironmentoperationsrolerequest_p.h"
#include "disassociateenvironmentoperationsroleresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::DisassociateEnvironmentOperationsRoleRequest
 * \brief The DisassociateEnvironmentOperationsRoleRequest class provides an interface for ElasticBeanstalk DisassociateEnvironmentOperationsRole requests.
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
 * \sa ElasticBeanstalkClient::disassociateEnvironmentOperationsRole
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateEnvironmentOperationsRoleRequest::DisassociateEnvironmentOperationsRoleRequest(const DisassociateEnvironmentOperationsRoleRequest &other)
    : ElasticBeanstalkRequest(new DisassociateEnvironmentOperationsRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateEnvironmentOperationsRoleRequest object.
 */
DisassociateEnvironmentOperationsRoleRequest::DisassociateEnvironmentOperationsRoleRequest()
    : ElasticBeanstalkRequest(new DisassociateEnvironmentOperationsRoleRequestPrivate(ElasticBeanstalkRequest::DisassociateEnvironmentOperationsRoleAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateEnvironmentOperationsRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateEnvironmentOperationsRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateEnvironmentOperationsRoleRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateEnvironmentOperationsRoleResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::DisassociateEnvironmentOperationsRoleRequestPrivate
 * \brief The DisassociateEnvironmentOperationsRoleRequestPrivate class provides private implementation for DisassociateEnvironmentOperationsRoleRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a DisassociateEnvironmentOperationsRoleRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
DisassociateEnvironmentOperationsRoleRequestPrivate::DisassociateEnvironmentOperationsRoleRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DisassociateEnvironmentOperationsRoleRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateEnvironmentOperationsRoleRequest
 * class' copy constructor.
 */
DisassociateEnvironmentOperationsRoleRequestPrivate::DisassociateEnvironmentOperationsRoleRequestPrivate(
    const DisassociateEnvironmentOperationsRoleRequestPrivate &other, DisassociateEnvironmentOperationsRoleRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
