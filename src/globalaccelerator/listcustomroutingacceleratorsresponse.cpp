// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustomroutingacceleratorsresponse.h"
#include "listcustomroutingacceleratorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlobalAccelerator {

/*!
 * \class QtAws::GlobalAccelerator::ListCustomRoutingAcceleratorsResponse
 * \brief The ListCustomRoutingAcceleratorsResponse class provides an interace for GlobalAccelerator ListCustomRoutingAccelerators responses.
 *
 * \inmodule QtAwsGlobalAccelerator
 *
 *  <fullname>Global Accelerator</fullname>
 * 
 *  This is the <i>Global Accelerator API Reference</i>. This guide is for developers who need detailed information about
 *  Global Accelerator API actions, data types, and errors. For more information about Global Accelerator features, see the
 *  <a href="https://docs.aws.amazon.com/global-accelerator/latest/dg/what-is-global-accelerator.html">Global Accelerator
 *  Developer
 * 
 *  Guide</a>>
 * 
 *  Global Accelerator is a service in which you create <i>accelerators</i> to improve the performance of your applications
 *  for local and global users. Depending on the type of accelerator you choose, you can gain additional benefits.
 * 
 *  </p <ul> <li>
 * 
 *  By using a standard accelerator, you can improve availability of your internet applications that are used by a global
 *  audience. With a standard accelerator, Global Accelerator directs traffic to optimal endpoints over the Amazon Web
 *  Services global network.
 * 
 *  </p </li> <li>
 * 
 *  For other scenarios, you might choose a custom routing accelerator. With a custom routing accelerator, you can use
 *  application logic to directly map one or more users to a specific endpoint among many
 * 
 *  endpoints> </li> </ul> <b>
 * 
 *  Global Accelerator is a global service that supports endpoints in multiple Amazon Web Services Regions but you must
 *  specify the US West (Oregon) Region to create, update, or otherwise work with accelerators. That is, for example,
 *  specify <code>--region us-west-2</code> on AWS CLI
 * 
 *  commands> </b>
 * 
 *  By default, Global Accelerator provides you with static IP addresses that you associate with your accelerator. The
 *  static IP addresses are anycast from the Amazon Web Services edge network. For IPv4, Global Accelerator provides two
 *  static IPv4 addresses. For dual-stack, Global Accelerator provides a total of four addresses: two static IPv4 addresses
 *  and two static IPv6 addresses. With a standard accelerator for IPv4, instead of using the addresses that Global
 *  Accelerator provides, you can configure these entry points to be IPv4 addresses from your own IP address ranges that you
 *  bring toGlobal Accelerator (BYOIP).
 * 
 *  </p
 * 
 *  For a standard accelerator, they distribute incoming application traffic across multiple endpoint resources in multiple
 *  Amazon Web Services Regions , which increases the availability of your applications. Endpoints for standard accelerators
 *  can be Network Load Balancers, Application Load Balancers, Amazon EC2 instances, or Elastic IP addresses that are
 *  located in one Amazon Web Services Region or multiple Amazon Web Services Regions. For custom routing accelerators, you
 *  map traffic that arrives to the static IP addresses to specific Amazon EC2 servers in endpoints that are virtual private
 *  cloud (VPC)
 * 
 *  subnets> <b>
 * 
 *  The static IP addresses remain assigned to your accelerator for as long as it exists, even if you disable the
 *  accelerator and it no longer accepts or routes traffic. However, when you <i>delete</i> an accelerator, you lose the
 *  static IP addresses that are assigned to it, so you can no longer route traffic by using them. You can use IAM policies
 *  like tag-based permissions with Global Accelerator to limit the users who have permissions to delete an accelerator. For
 *  more information, see <a
 *  href="https://docs.aws.amazon.com/global-accelerator/latest/dg/access-control-manage-access-tag-policies.html">Tag-based
 * 
 *  policies</a>> </b>
 * 
 *  For standard accelerators, Global Accelerator uses the Amazon Web Services global network to route traffic to the
 *  optimal regional endpoint based on health, client location, and policies that you configure. The service reacts
 *  instantly to changes in health or configuration to ensure that internet traffic from clients is always directed to
 *  healthy
 * 
 *  endpoints>
 * 
 *  For more information about understanding and using Global Accelerator, see the <a
 *  href="https://docs.aws.amazon.com/global-accelerator/latest/dg/what-is-global-accelerator.html">Global Accelerator
 *  Developer
 *
 * \sa GlobalAcceleratorClient::listCustomRoutingAccelerators
 */

/*!
 * Constructs a ListCustomRoutingAcceleratorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCustomRoutingAcceleratorsResponse::ListCustomRoutingAcceleratorsResponse(
        const ListCustomRoutingAcceleratorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlobalAcceleratorResponse(new ListCustomRoutingAcceleratorsResponsePrivate(this), parent)
{
    setRequest(new ListCustomRoutingAcceleratorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCustomRoutingAcceleratorsRequest * ListCustomRoutingAcceleratorsResponse::request() const
{
    Q_D(const ListCustomRoutingAcceleratorsResponse);
    return static_cast<const ListCustomRoutingAcceleratorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlobalAccelerator ListCustomRoutingAccelerators \a response.
 */
void ListCustomRoutingAcceleratorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCustomRoutingAcceleratorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlobalAccelerator::ListCustomRoutingAcceleratorsResponsePrivate
 * \brief The ListCustomRoutingAcceleratorsResponsePrivate class provides private implementation for ListCustomRoutingAcceleratorsResponse.
 * \internal
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a ListCustomRoutingAcceleratorsResponsePrivate object with public implementation \a q.
 */
ListCustomRoutingAcceleratorsResponsePrivate::ListCustomRoutingAcceleratorsResponsePrivate(
    ListCustomRoutingAcceleratorsResponse * const q) : GlobalAcceleratorResponsePrivate(q)
{

}

/*!
 * Parses a GlobalAccelerator ListCustomRoutingAccelerators response element from \a xml.
 */
void ListCustomRoutingAcceleratorsResponsePrivate::parseListCustomRoutingAcceleratorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomRoutingAcceleratorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlobalAccelerator
} // namespace QtAws
