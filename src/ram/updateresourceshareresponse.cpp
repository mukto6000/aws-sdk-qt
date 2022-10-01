// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourceshareresponse.h"
#include "updateresourceshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::UpdateResourceShareResponse
 * \brief The UpdateResourceShareResponse class provides an interace for Ram UpdateResourceShare responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::updateResourceShare
 */

/*!
 * Constructs a UpdateResourceShareResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceShareResponse::UpdateResourceShareResponse(
        const UpdateResourceShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new UpdateResourceShareResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceShareRequest * UpdateResourceShareResponse::request() const
{
    Q_D(const UpdateResourceShareResponse);
    return static_cast<const UpdateResourceShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram UpdateResourceShare \a response.
 */
void UpdateResourceShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::UpdateResourceShareResponsePrivate
 * \brief The UpdateResourceShareResponsePrivate class provides private implementation for UpdateResourceShareResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a UpdateResourceShareResponsePrivate object with public implementation \a q.
 */
UpdateResourceShareResponsePrivate::UpdateResourceShareResponsePrivate(
    UpdateResourceShareResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram UpdateResourceShare response element from \a xml.
 */
void UpdateResourceShareResponsePrivate::parseUpdateResourceShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
