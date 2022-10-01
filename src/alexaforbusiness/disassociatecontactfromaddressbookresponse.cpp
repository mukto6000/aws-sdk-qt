// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatecontactfromaddressbookresponse.h"
#include "disassociatecontactfromaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateContactFromAddressBookResponse
 * \brief The DisassociateContactFromAddressBookResponse class provides an interace for AlexaForBusiness DisassociateContactFromAddressBook responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::disassociateContactFromAddressBook
 */

/*!
 * Constructs a DisassociateContactFromAddressBookResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateContactFromAddressBookResponse::DisassociateContactFromAddressBookResponse(
        const DisassociateContactFromAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DisassociateContactFromAddressBookResponsePrivate(this), parent)
{
    setRequest(new DisassociateContactFromAddressBookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateContactFromAddressBookRequest * DisassociateContactFromAddressBookResponse::request() const
{
    Q_D(const DisassociateContactFromAddressBookResponse);
    return static_cast<const DisassociateContactFromAddressBookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DisassociateContactFromAddressBook \a response.
 */
void DisassociateContactFromAddressBookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateContactFromAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateContactFromAddressBookResponsePrivate
 * \brief The DisassociateContactFromAddressBookResponsePrivate class provides private implementation for DisassociateContactFromAddressBookResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateContactFromAddressBookResponsePrivate object with public implementation \a q.
 */
DisassociateContactFromAddressBookResponsePrivate::DisassociateContactFromAddressBookResponsePrivate(
    DisassociateContactFromAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DisassociateContactFromAddressBook response element from \a xml.
 */
void DisassociateContactFromAddressBookResponsePrivate::parseDisassociateContactFromAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateContactFromAddressBookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
