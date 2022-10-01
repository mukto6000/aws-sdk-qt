// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtopicsresponse.h"
#include "listtopicsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::ListTopicsResponse
 * \brief The ListTopicsResponse class provides an interace for Sns ListTopics responses.
 *
 * \inmodule QtAwsSns
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see the <a
 *  href="http://aws.amazon.com/sns/">Amazon SNS product page</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/sns/latest/dg/sns-authentication-and-access-control.html">Identity and access
 *  management in Amazon SNS</a> in the <i>Amazon SNS Developer Guide.</i>
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::listTopics
 */

/*!
 * Constructs a ListTopicsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTopicsResponse::ListTopicsResponse(
        const ListTopicsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new ListTopicsResponsePrivate(this), parent)
{
    setRequest(new ListTopicsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTopicsRequest * ListTopicsResponse::request() const
{
    Q_D(const ListTopicsResponse);
    return static_cast<const ListTopicsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sns ListTopics \a response.
 */
void ListTopicsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTopicsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sns::ListTopicsResponsePrivate
 * \brief The ListTopicsResponsePrivate class provides private implementation for ListTopicsResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a ListTopicsResponsePrivate object with public implementation \a q.
 */
ListTopicsResponsePrivate::ListTopicsResponsePrivate(
    ListTopicsResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a Sns ListTopics response element from \a xml.
 */
void ListTopicsResponsePrivate::parseListTopicsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTopicsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sns
} // namespace QtAws
