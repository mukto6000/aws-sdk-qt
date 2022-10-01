// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprofileresponse.h"
#include "updateprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateProfileResponse
 * \brief The UpdateProfileResponse class provides an interace for Transfer UpdateProfile responses.
 *
 * \inmodule QtAwsTransfer
 *
 *  Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3) or Amazon EFS. Additionally, you can use Applicability Statement 2 (AS2) to
 *  transfer files into and out of Amazon S3. Amazon Web Services helps you seamlessly migrate your file transfer workflows
 *  to Transfer Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53
 *  so nothing changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it
 *  with Amazon Web Services for processing, analytics, machine learning, and archiving. Getting started with Transfer
 *  Family is easy since there is no infrastructure to buy and set
 *
 * \sa TransferClient::updateProfile
 */

/*!
 * Constructs a UpdateProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProfileResponse::UpdateProfileResponse(
        const UpdateProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new UpdateProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProfileRequest * UpdateProfileResponse::request() const
{
    Q_D(const UpdateProfileResponse);
    return static_cast<const UpdateProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer UpdateProfile \a response.
 */
void UpdateProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::UpdateProfileResponsePrivate
 * \brief The UpdateProfileResponsePrivate class provides private implementation for UpdateProfileResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateProfileResponsePrivate object with public implementation \a q.
 */
UpdateProfileResponsePrivate::UpdateProfileResponsePrivate(
    UpdateProfileResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer UpdateProfile response element from \a xml.
 */
void UpdateProfileResponsePrivate::parseUpdateProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
