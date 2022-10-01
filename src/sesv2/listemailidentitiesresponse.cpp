// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listemailidentitiesresponse.h"
#include "listemailidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListEmailIdentitiesResponse
 * \brief The ListEmailIdentitiesResponse class provides an interace for SESv2 ListEmailIdentities responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::listEmailIdentities
 */

/*!
 * Constructs a ListEmailIdentitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListEmailIdentitiesResponse::ListEmailIdentitiesResponse(
        const ListEmailIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListEmailIdentitiesResponsePrivate(this), parent)
{
    setRequest(new ListEmailIdentitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEmailIdentitiesRequest * ListEmailIdentitiesResponse::request() const
{
    Q_D(const ListEmailIdentitiesResponse);
    return static_cast<const ListEmailIdentitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListEmailIdentities \a response.
 */
void ListEmailIdentitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEmailIdentitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListEmailIdentitiesResponsePrivate
 * \brief The ListEmailIdentitiesResponsePrivate class provides private implementation for ListEmailIdentitiesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListEmailIdentitiesResponsePrivate object with public implementation \a q.
 */
ListEmailIdentitiesResponsePrivate::ListEmailIdentitiesResponsePrivate(
    ListEmailIdentitiesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListEmailIdentities response element from \a xml.
 */
void ListEmailIdentitiesResponsePrivate::parseListEmailIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEmailIdentitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
